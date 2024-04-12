void fun()
{
  int entity_0 = 45;
  char entity_6[10] = "";
  entity_6 = NULL;
  char entity_1[50] = "";
  entity_1 = NULL;
  char entity_4[55] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(84*sizeof(char));
  entity_2[84-1]='';
  memset(entity_4, 'G', 55-1);
  entity_4[55-1]='';
  memset(entity_1, 'o', 50-1);
  entity_1[50-1]='';
  memset(entity_6, 's', 10-1);
  entity_6[10-1]='';
  entity_4[entity_0] = 'Q';
}