void fun()
{
  int entity_0 = 4;
  char* entity_3;
  char* entity_4;
  char entity_2[44] = "";
  entity_2 = NULL;
  memset(entity_2, 's', 44-1);
  entity_2[44-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  entity_4 = (char*)malloc(16*sizeof(char));
  entity_4[16-1]='';
  memcpy(entity_3, entity_2, 44*sizeof(char));
}