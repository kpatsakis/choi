void fun()
{
  int entity_7 = 85;
  int entity_8 = 59;
  char* entity_1;
  char* entity_0;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(65*sizeof(char));
  entity_0[65-1]='';
  memset(entity_2, 'j', entity_7-1);
  entity_2[entity_7-1]='';
  entity_1 = (char*)malloc(16*sizeof(char));
  entity_1[16-1]='';
  memcpy(entity_1, entity_2, entity_7*sizeof(char));
}