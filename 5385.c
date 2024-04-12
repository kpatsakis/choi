void fun()
{
  int entity_6 = 66;
  int entity_8 = 12;
  entity_8 = 100;
  char* entity_2;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'h', entity_8-1);
  entity_1[entity_8-1]='';
  entity_2 = (char*)malloc(31*sizeof(char));
  entity_2[31-1]='';
  memcpy(entity_2, entity_1, entity_8*sizeof(char));
}