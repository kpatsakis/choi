void fun()
{
  int entity_5 = 62;
  char* entity_6;
  char entity_3[92] = "";
  entity_3 = NULL;
  memset(entity_3, 'X', 92-1);
  entity_3[92-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memcpy(entity_6, entity_3, 92*sizeof(char));
}