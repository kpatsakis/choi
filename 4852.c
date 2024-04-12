void fun()
{
  int entity_8 = 17;
  char* entity_9;
  char entity_7 = 'i';
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(51*sizeof(char));
  entity_9[51-1]='';
  memset(entity_6, 'T', entity_8-1);
  entity_6[entity_8-1]='';
  entity_6[21] = 'O';
}