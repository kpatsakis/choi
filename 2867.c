void fun()
{
  int entity_6 = 21;
  char* entity_2;
  char entity_9 = 'z';
  char entity_5 = 'd';
  char entity_8[76] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(33*sizeof(char));
  entity_2[33-1]='';
  memset(entity_8, 'f', 76-1);
  entity_8[76-1]='';
  memcpy(entity_2, entity_8, 76*sizeof(char));
}