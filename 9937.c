void fun()
{
  int entity_7 = 25;
  int entity_0 = 23;
  char* entity_6;
  char* entity_3;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(80*sizeof(char));
  entity_6[80-1]='';
  entity_3 = (char*)malloc(85*sizeof(char));
  entity_3[85-1]='';
  memset(entity_2, 'T', entity_0-1);
  entity_2[entity_0-1]='';
  entity_0 = 64;
  memcpy(entity_6, entity_2, entity_0*sizeof(char));
}