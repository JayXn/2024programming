import java.util.*;

public class FamilyRelation {
    // 性別列表
    static Set<String> males = new HashSet<>(Arrays.asList(
        "Andy","Bob","Cecil","Dennis","Edward","Felix","Martin","Oscar","Quinn"
    ));
    static Set<String> females = new HashSet<>(Arrays.asList(
        "Gigi","Helen","Iris","Jane","Kate","Liz","Nancy","Pattie","Rebecca"
    ));

    // 婚姻與直系父母資料
    static Map<String,String> spouse = new HashMap<>();
    static Map<String,String> parent = new HashMap<>();
    static Set<String> people = new HashSet<>();

    static {
        // Fact #2: marriage
        spouse.put("Bob",    "Helen");   spouse.put("Helen",  "Bob");
        spouse.put("Dennis", "Pattie");  spouse.put("Pattie", "Dennis");
        spouse.put("Gigi",   "Martin");  spouse.put("Martin", "Gigi");

        // Fact #3: parent(child, parent)
        parent.put("Bob",     "Andy");
        parent.put("Cecil",   "Bob");
        parent.put("Dennis",  "Cecil");
        parent.put("Edward",  "Dennis");
        parent.put("Felix",   "Edward");
        parent.put("Helen",   "Gigi");
        parent.put("Iris",    "Helen");
        parent.put("Jane",    "Iris");
        parent.put("Kate",    "Jane");
        parent.put("Liz",     "Kate");
        parent.put("Nancy",   "Martin");
        parent.put("Oscar",   "Nancy");
        parent.put("Pattie",  "Oscar");
        parent.put("Quinn",   "Pattie");
        parent.put("Rebecca", "Quinn");

        // 將所有人名收集起來以便遍歷
        people.addAll(males);
        people.addAll(females);
    }

    /** 
     * 判斷 p 是否為 c 的父母（或 p 的配偶也是 c 的父母）
     */
    static boolean isParent(String p, String c) {
        String direct = parent.get(c);
        if (p.equals(direct)) return true;
        String sp = spouse.get(p);
        return sp != null && sp.equals(direct);
    }

    /**
     * 判斷 x, y 是否為兄弟姊妹：只要找到某人 z，
     * 同時 isParent(z, x) && isParent(z, y)，且 x ≠ y
     */
    static boolean areSiblings(String x, String y) {
        if (x.equals(y)) return false;
        for (String z : people) {
            if (isParent(z, x) && isParent(z, y)) {
                return true;
            }
        }
        return false;
    }

    /** brothers：siblings + 兩者皆為男性 */
    static boolean areBrothers(String x, String y) {
        return areSiblings(x, y) && males.contains(x) && males.contains(y);
    }

    /** sisters：siblings + 兩者皆為女性 */
    static boolean areSisters(String x, String y) {
        return areSiblings(x, y) && females.contains(x) && females.contains(y);
    }

    /** cousins：父母彼此為 siblings */
    static boolean areCousins(String x, String y) {
        String px = parent.get(x), py = parent.get(y);
        if (px == null || py == null) return false;
        return areSiblings(px, py);
    }

    /** 根據輸入關係字串回 Yes/No（或 Unknown） */
    static String answerRelationship(String a, String b, String rel) {
        switch (rel.toLowerCase()) {
            case "siblings": return areSiblings(a, b) ? "Yes" : "No";
            case "brothers": return areBrothers(a, b) ? "Yes" : "No";
            case "sisters":  return areSisters(a, b) ? "Yes" : "No";
            case "cousins":  return areCousins(a, b) ? "Yes" : "No";
            case "parent":   return isParent(a, b)   ? "Yes" : "No";
            default: return "Unknown relation";
        }
    }

    @SuppressWarnings("resource")
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a, b, r;
        while (true) {
            System.out.print("first person: ");
            a = in.next();
            if (a.equalsIgnoreCase("exit")) break;

            System.out.print("second person: ");
            b = in.next();

            System.out.print("relationship (siblings, brothers, sisters, cousins, parent): ");
            r = in.next();

            System.out.println(answerRelationship(a, b, r));
        }
    }
}
