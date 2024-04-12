void fun()
{
  int entity_6 = 16;
  int entity_1 = 59;
  entity_1 = 27;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_2;
  char* entity_7;
  memset(entity_0, 'e', entity_1-1);
  entity_0[entity_1-1]='';
  entity_2 = (char*)malloc(0*sizeof(char));
  entity_2[0-1]='';
  entity_7 = (char*)malloc(20*sizeof(char));
  entity_7[20-1]='';
  memcpy(entity_7, entity_0, entity_1*sizeof(char));
}