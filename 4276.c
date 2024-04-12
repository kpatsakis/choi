void fun()
{
  int entity_3 = 33;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char* entity_8;
  char* entity_1;
  char* entity_2;
  char entity_4 = 'T';
  entity_8 = (char*)malloc(14*sizeof(char));
  entity_8[14-1]='';
  memset(entity_7, 'S', entity_3-1);
  entity_7[entity_3-1]='';
  entity_2 = (char*)malloc(16*sizeof(char));
  entity_2[16-1]='';
  entity_1 = (char*)malloc(15*sizeof(char));
  entity_1[15-1]='';
  memcpy(entity_8, entity_7, entity_3*sizeof(char));
}