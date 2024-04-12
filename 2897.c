void fun()
{
  int entity_7 = 97;
  char* entity_2;
  char* entity_3;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  memset(entity_0, 'd', entity_7-1);
  entity_0[entity_7-1]='';
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[31-1]='';
  entity_2 = (char*)malloc(54*sizeof(char));
  entity_2[54-1]='';
  entity_7 = 56;
  strcpy(entity_3, entity_0);
}