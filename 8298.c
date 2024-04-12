void fun()
{
  int entity_1 = 90;
  char entity_7[50] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_7, 'p', 50-1);
  entity_7[50-1]='';
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[96-1]='';
  memcpy(entity_3, entity_7, 50*sizeof(char));
}