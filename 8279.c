void fun()
{
  int entity_2 = 90;
  char* entity_7;
  char entity_0[3] = "";
  entity_0 = NULL;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_3, 'Y', entity_2-1);
  entity_3[entity_2-1]='';
  entity_7 = (char*)malloc(94*sizeof(char));
  entity_7[94-1]='';
  memset(entity_0, 'M', 3-1);
  entity_0[3-1]='';
  entity_2 = 29;
  strcpy(entity_7, entity_3);
}