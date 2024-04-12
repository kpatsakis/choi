void fun()
{
  char* entity_8;
  char entity_0[84] = "";
  entity_0 = NULL;
  char entity_3 = 'q';
  entity_8 = (char*)malloc(13*sizeof(char));
  entity_8[13-1]='';
  memset(entity_0, 'T', 84-1);
  entity_0[84-1]='';
  memcpy(entity_8, entity_0, 84*sizeof(char));
}