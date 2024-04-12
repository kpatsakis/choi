void fun()
{
  char entity_7[28] = "";
  entity_7 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(100*sizeof(char));
  entity_8[100-1]='';
  memset(entity_7, 'v', 28-1);
  entity_7[28-1]='';
  memcpy(entity_8, entity_7, 28*sizeof(char));
}