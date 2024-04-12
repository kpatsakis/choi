void fun()
{
  int entity_6 = 82;
  char* entity_7;
  char entity_5[92] = "";
  entity_5 = NULL;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char* entity_3;
  char entity_2[66] = "";
  entity_2 = NULL;
  memset(entity_2, 'i', 66-1);
  entity_2[66-1]='';
  entity_3 = (char*)malloc(75*sizeof(char));
  entity_3[75-1]='';
  memset(entity_5, 'R', 92-1);
  entity_5[92-1]='';
  entity_7 = (char*)malloc(38*sizeof(char));
  entity_7[38-1]='';
  memset(entity_0, 'O', entity_6-1);
  entity_0[entity_6-1]='';
  strcpy(entity_7, entity_0);
}