void fun()
{
  char entity_2[67] = "";
  entity_2 = NULL;
  char* entity_8;
  char* entity_6;
  entity_8 = (char*)malloc(6*sizeof(char));
  entity_8[6-1]='';
  memset(entity_2, 'k', 67-1);
  entity_2[67-1]='';
  entity_6 = (char*)malloc(96*sizeof(char));
  entity_6[96-1]='';
  memcpy(entity_6, entity_2, 67*sizeof(char));
}