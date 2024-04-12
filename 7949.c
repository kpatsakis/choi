void fun()
{
  int entity_6 = 59;
  char* entity_7;
  char entity_1[81] = "";
  entity_1 = NULL;
  memset(entity_1, 'i', 81-1);
  entity_1[81-1]='';
  entity_7 = (char*)malloc(30*sizeof(char));
  entity_7[30-1]='';
  memcpy(entity_7, entity_1, 81*sizeof(char));
}