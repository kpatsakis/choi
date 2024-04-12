void fun()
{
  int entity_7 = 100;
  int entity_4 = 36;
  char entity_1 = 'F';
  char* entity_2;
  char entity_6[75] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  memset(entity_6, 'I', 75-1);
  entity_6[75-1]='';
  memcpy(entity_2, entity_6, 75*sizeof(char));
}