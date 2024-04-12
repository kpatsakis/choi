void fun()
{
  char* entity_5;
  char entity_4[84] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(29*sizeof(char));
  entity_5[29-1]='';
  memset(entity_4, 'l', 84-1);
  entity_4[84-1]='';
  memcpy(entity_5, entity_4, 84*sizeof(char));
}