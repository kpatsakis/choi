void fun()
{
  char* entity_8;
  char entity_9[67] = "";
  entity_8 = (char*)malloc(29*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'e', 67-1);
  entity_9[67-1]='0';
  strcpy(entity_8, entity_9);
}