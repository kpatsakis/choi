void fun()
{
  int entity_3 = 22;
  entity_3 = 16;
  char entity_8[47] = "";
  entity_8 = NULL;
  char* entity_6;
  char* entity_4;
  char* entity_1;
  entity_1 = (char*)malloc(87*sizeof(char));
  entity_1[87-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_8, 'S', 47-1);
  entity_8[47-1]='';
  entity_6 = (char*)malloc(12*sizeof(char));
  entity_6[12-1]='';
  memcpy(entity_4, entity_8, 47*sizeof(char));
}