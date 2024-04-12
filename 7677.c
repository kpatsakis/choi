void fun()
{
  int entity_7 = 98;
  int entity_8 = 8;
  char* entity_3;
  char entity_4[100] = "";
  entity_4 = NULL;
  memset(entity_4, 'S', 100-1);
  entity_4[100-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memcpy(entity_3, entity_4, 100*sizeof(char));
}