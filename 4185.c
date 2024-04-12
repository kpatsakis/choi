void fun()
{
  int entity_4 = 72;
  char* entity_6;
  char entity_5[56] = "";
  entity_5 = NULL;
  memset(entity_5, 'p', 56-1);
  entity_5[56-1]='';
  entity_6 = (char*)malloc(50*sizeof(char));
  entity_6[50-1]='';
  entity_5[entity_4] = 'N';
}