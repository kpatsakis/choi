void fun()
{
  int entity_6 = 60;
  entity_6 = 31;
  char* entity_1;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  char entity_0[89] = "";
  entity_0 = NULL;
  char* entity_2;
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[47-1]='';
  memset(entity_8, 'D', entity_6-1);
  entity_8[entity_6-1]='';
  memset(entity_0, 'b', 89-1);
  entity_0[89-1]='';
  entity_2 = (char*)malloc(48*sizeof(char));
  entity_2[48-1]='';
  memcpy(entity_2, entity_8, entity_6*sizeof(char));
}