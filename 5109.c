void fun()
{
  char* entity_8;
  char entity_7 = 'x';
  char entity_2[67] = "";
  entity_2 = NULL;
  memset(entity_2, 'm', 67-1);
  entity_2[67-1]='';
  entity_8 = (char*)malloc(84*sizeof(char));
  entity_8[84-1]='';
  memcpy(entity_8, entity_2, 67*sizeof(char));
}