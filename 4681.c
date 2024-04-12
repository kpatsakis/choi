void fun()
{
  int entity_4 = 63;
  char* entity_3;
  char* entity_7;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(70*sizeof(char));
  entity_7[70-1]='';
  entity_3 = (char*)malloc(30*sizeof(char));
  entity_3[30-1]='';
  memset(entity_6, 'x', entity_4-1);
  entity_6[entity_4-1]='';
  memcpy(entity_7, entity_6, entity_4*sizeof(char));
}