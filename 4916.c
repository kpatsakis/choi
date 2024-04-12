void fun()
{
  int entity_7 = 14;
  char entity_5 = 'V';
  char* entity_6;
  char entity_8[25] = "";
  entity_8 = NULL;
  memset(entity_8, 'e', 25-1);
  entity_8[25-1]='';
  entity_6 = (char*)malloc(50*sizeof(char));
  entity_6[50-1]='';
  entity_7 = 51;
  entity_8[entity_7] = 'K';
}