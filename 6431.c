void fun()
{
  char entity_9[85] = "";
  entity_9 = NULL;
  char* entity_8;
  char entity_4 = 'T';
  char entity_6[13] = "";
  entity_6 = NULL;
  memset(entity_9, 'j', 85-1);
  entity_9[85-1]='';
  memset(entity_6, 'U', 13-1);
  entity_6[13-1]='';
  entity_8 = (char*)malloc(99*sizeof(char));
  entity_8[99-1]='';
  entity_6[79] = 'q';
}