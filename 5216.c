void fun()
{
  int entity_7 = 26;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char entity_9[48] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(28*sizeof(char));
  entity_6[28-1]='';
  memset(entity_9, 'b', 48-1);
  entity_9[48-1]='';
  memset(entity_8, 'w', entity_7-1);
  entity_8[entity_7-1]='';
  entity_8[2] = 'T';
}