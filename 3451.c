void fun()
{
  int entity_1 = 66;
  int entity_2 = 90;
  entity_2 = 47;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(27*sizeof(char));
  entity_6[27-1]='';
  memset(entity_8, 'O', entity_2-1);
  entity_8[entity_2-1]='';
  memcpy(entity_6, entity_8, entity_2*sizeof(char));
}