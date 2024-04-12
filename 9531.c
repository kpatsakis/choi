void fun()
{
  int entity_0 = 4;
  char entity_3[20] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(20*sizeof(char));
  entity_7[20-1]='';
  memset(entity_3, 'Y', 20-1);
  entity_3[20-1]='';
  memcpy(entity_7, entity_3, 20*sizeof(char));
}