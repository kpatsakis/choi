void fun()
{
  int entity_4 = 16;
  char entity_9[96] = "";
  entity_9 = NULL;
  char* entity_3;
  memset(entity_9, 'w', 96-1);
  entity_9[96-1]='';
  entity_3 = (char*)malloc(37*sizeof(char));
  entity_3[37-1]='';
  memcpy(entity_3, entity_9, 96*sizeof(char));
}