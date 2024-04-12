void fun()
{
  int entity_2 = 70;
  char* entity_0;
  char entity_3[36] = "";
  entity_3 = NULL;
  char entity_6[79] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_3, 'p', 36-1);
  entity_3[36-1]='';
  memset(entity_6, 'r', 79-1);
  entity_6[79-1]='';
  entity_2 = 4;
  strcpy(entity_0, entity_6);
}