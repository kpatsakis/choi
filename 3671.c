void fun()
{
  int entity_0 = 83;
  int entity_2 = 4;
  int entity_6 = 40;
  int entity_8 = 98;
  char* entity_3;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  memset(entity_7, 'm', entity_0-1);
  entity_7[entity_0-1]='';
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  memcpy(entity_3, entity_7, entity_0*sizeof(char));
}