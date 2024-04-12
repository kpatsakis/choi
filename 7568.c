void fun()
{
  int entity_2 = 43;
  char entity_7[11] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_5 = (char*)malloc(53*sizeof(char));
  entity_5[53-1]='';
  memset(entity_7, 'o', 11-1);
  entity_7[11-1]='';
  memset(entity_0, 'r', entity_2-1);
  entity_0[entity_2-1]='';
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[31-1]='';
  strcpy(entity_3, entity_0);
}