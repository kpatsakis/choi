void fun()
{
  char* entity_7;
  char entity_8[14] = "";
  entity_8 = NULL;
  memset(entity_8, 'c', 14-1);
  entity_8[14-1]='';
  entity_7 = (char*)malloc(17*sizeof(char));
  entity_7[17-1]='';
  memcpy(entity_7, entity_8, 14*sizeof(char));
}