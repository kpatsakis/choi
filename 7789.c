void fun()
{
  int entity_0 = 2;
  char* entity_3;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_3 = (char*)malloc(34*sizeof(char));
  entity_3[34-1]='';
  entity_7 = (char*)malloc(60*sizeof(char));
  entity_7[60-1]='';
  memset(entity_6, 'x', entity_0-1);
  entity_6[entity_0-1]='';
  memcpy(entity_3, entity_6, entity_0*sizeof(char));
}