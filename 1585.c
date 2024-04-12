void fun()
{
  int entity_0 = 31;
  char entity_7[74] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'V', 74-1);
  entity_7[74-1]='';
  entity_1 = (char*)malloc(61*sizeof(char));
  entity_1[61-1]='';
  strcpy(entity_1, entity_7);
}