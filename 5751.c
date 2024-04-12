void fun()
{
  char entity_7[2] = "";
  entity_7 = NULL;
  char* entity_0;
  char* entity_8;
  memset(entity_7, 'q', 2-1);
  entity_7[2-1]='';
  entity_8 = (char*)malloc(89*sizeof(char));
  entity_8[89-1]='';
  entity_0 = (char*)malloc(67*sizeof(char));
  entity_0[67-1]='';
  memcpy(entity_0, entity_7, 2*sizeof(char));
}