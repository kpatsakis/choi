void fun()
{
  int entity_5 = 62;
  char entity_2[63] = "";
  entity_2 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(91*sizeof(char));
  entity_7[91-1]='';
  memset(entity_2, 'Z', 63-1);
  entity_2[63-1]='';
  strcpy(entity_7, entity_2);
}