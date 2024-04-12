void fun()
{
  int entity_6 = 57;
  char entity_2[75] = "";
  entity_2 = NULL;
  char* entity_4;
  memset(entity_2, 'J', 75-1);
  entity_2[75-1]='';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memcpy(entity_4, entity_2, 75*sizeof(char));
}