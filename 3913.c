void fun()
{
  int entity_4 = 45;
  char* entity_7;
  char entity_6[51] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(65*sizeof(char));
  entity_7[65-1]='';
  memset(entity_6, 'U', 51-1);
  entity_6[51-1]='';
  entity_6[entity_4] = 'K';
}