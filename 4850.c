void fun()
{
  int entity_4 = 22;
  char* entity_5;
  char entity_6[84] = "";
  entity_6 = NULL;
  memset(entity_6, 'D', 84-1);
  entity_6[84-1]='';
  entity_5 = (char*)malloc(5*sizeof(char));
  entity_5[5-1]='';
  memcpy(entity_5, entity_6, 84*sizeof(char));
}