void fun()
{
  int entity_0 = 31;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char entity_6 = 'Y';
  char* entity_8;
  memset(entity_2, 'Z', entity_0-1);
  entity_2[entity_0-1]='';
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[31-1]='';
  entity_0 = 59;
  strcpy(entity_8, entity_2);
}