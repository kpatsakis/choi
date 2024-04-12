void fun()
{
  int entity_6 = 38;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_3;
  char entity_2 = 'c';
  entity_3 = (char*)malloc(22*sizeof(char));
  entity_3[22-1]='';
  memset(entity_4, 'V', entity_6-1);
  entity_4[entity_6-1]='';
  entity_4[75] = 'g';
}