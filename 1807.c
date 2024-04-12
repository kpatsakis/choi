void fun()
{
  int entity_8 = 63;
  char* entity_5;
  char* entity_6;
  char entity_2[82] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memset(entity_2, 't', 82-1);
  entity_2[82-1]='';
  entity_6 = (char*)malloc(23*sizeof(char));
  entity_6[23-1]='';
  memcpy(entity_5, entity_2, 82*sizeof(char));
}