void fun()
{
  int entity_7 = 96;
  int entity_5 = 65;
  char entity_6[47] = "";
  entity_6 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(7*sizeof(char));
  entity_4[7-1]='';
  memset(entity_6, 'z', 47-1);
  entity_6[47-1]='';
  entity_6[entity_5] = 'K';
}