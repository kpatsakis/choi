void fun()
{
  int entity_3 = 52;
  char* entity_7;
  char entity_9 = 'K';
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'T', entity_3-1);
  entity_6[entity_3-1]='';
  entity_7 = (char*)malloc(6*sizeof(char));
  entity_7[6-1]='';
  entity_3 = 26;
  entity_6[72] = 'c';
}