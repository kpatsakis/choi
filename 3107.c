void fun()
{
  int entity_4 = 5;
  int entity_6 = 3;
  char entity_7[39] = "";
  entity_7 = NULL;
  char* entity_0;
  char* entity_2;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_7, 'd', 39-1);
  entity_7[39-1]='';
  entity_2 = (char*)malloc(48*sizeof(char));
  entity_2[48-1]='';
  memcpy(entity_0, entity_7, 39*sizeof(char));
}