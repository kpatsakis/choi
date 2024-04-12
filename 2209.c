void fun()
{
  int entity_5 = 51;
  int entity_4 = 98;
  char entity_8[20] = "";
  entity_8 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  memset(entity_8, 'l', 20-1);
  entity_8[20-1]='';
  entity_8[entity_5] = 'k';
}