void fun()
{
  char* entity_9;
  char entity_3[82] = "";
  char entity_0[76] = "";
  entity_9 = (char*)malloc(13*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 'I', 76-1);
  entity_0[76-1]='0';
  memset(entity_3, 'T', 82-1);
  entity_3[82-1]='0';
  memcpy(entity_9, entity_3, 82*sizeof(char));
}